

// A map tile has been decoded. Substitute it?
// Map tile is in A. Do it in assembly, sorry

#asm
  // If gpit < paint1 Or gpit > paint2 -> a = 0

  ld  b, a              // Save A

  ld  a, (_paint_y1)
  ld  c, a              // C = paint_y1 
  ld  a, (_gpit)        // A = gpit 

  cp  c                 // gpit < paint_y1 ? 
  jr  nc, omtd_done     // No carry = gpit >= paint_y1 -> do nothing

  // gpit > paint2 -> paint2 < gpit
  ld  c, a              // C = gpit
  ld  a, (_paint_y2)    // A = pant_y2
  
  cp  c                 // pant_y2 < gpit ? 
  jr  nc, omtd_done     // No carry = pant_y2 >= gpit -> do nothing

.omtd_change 
  ld  b, 0

.omtd_done
  ld  a, b              // Restore A

#endasm