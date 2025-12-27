// For looping over subsets of a mask. Few bit set in the mask are made zero
// eg: 111011 -> 111010, 111001, 101001, 110010, etc.
for(int i=mask;i>=0;i=(i-1)&mask){
  // now every i is a subset of the mask
}
