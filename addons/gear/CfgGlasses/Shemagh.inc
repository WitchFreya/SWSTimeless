#define GLASSES_NAME(var0) displayName = QNAME(Shemagh (var0))

class GLASSES(Shemagh) {
  ITEM_META(2);
  GLASSES_NAME(Pink);
  model = QPATHTOF(data\shemagh\shemagh);
};

class GLASSES(Shemagh_Up): GLASSES(Shemagh) {
  model = QPATHTOF(data\shemagh\shemagh_up);
  GLASSES_NAME(Pink/Up);
};

#undef GLASSES_NAME