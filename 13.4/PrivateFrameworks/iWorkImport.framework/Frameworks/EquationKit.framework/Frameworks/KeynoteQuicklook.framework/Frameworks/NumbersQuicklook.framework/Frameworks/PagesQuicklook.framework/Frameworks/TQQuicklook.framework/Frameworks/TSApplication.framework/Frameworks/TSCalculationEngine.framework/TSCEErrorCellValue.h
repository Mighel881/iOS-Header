//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCalculationEngine/TSCECellValue.h>

@interface TSCEErrorCellValue : TSCECellValue
{
    struct TSCEErrorValue *_errorValue;
}

-     // Error parsing type: v24@0:8^{ErrorCellValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}dii}16, name: encodeToArchive:
-     // Error parsing type: @32@0:8r^{ErrorCellValueArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}dii}16@24, name: initWithArchive:locale:
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)description;
- (id)format;
- (struct TSCEValue)tsceValue;
- (struct TSCEErrorValue *)errorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithErrorValue:(struct TSCEErrorValue *)arg1 locale:(id)arg2;

@end

