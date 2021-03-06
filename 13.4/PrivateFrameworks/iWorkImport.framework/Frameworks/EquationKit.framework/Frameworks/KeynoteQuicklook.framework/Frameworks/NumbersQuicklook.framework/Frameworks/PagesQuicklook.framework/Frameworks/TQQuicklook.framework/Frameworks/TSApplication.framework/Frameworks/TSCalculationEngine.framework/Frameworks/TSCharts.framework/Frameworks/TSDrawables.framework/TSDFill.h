//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSDrawables/TSDPathPainter-Protocol.h>
#import <TSDrawables/TSSPreset-Protocol.h>
#import <TSDrawables/TSSPropertyCommandSerializing-Protocol.h>
#import <TSDrawables/TSSPropertyValueArchiving-Protocol.h>

@class NSString, TSUColor;

@interface TSDFill : NSObject <TSSPropertyCommandSerializing, TSSPropertyValueArchiving, TSDPathPainter, TSSPreset>
{
}

+     // Error parsing type: @32@0:8r^{FillArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Color}^{GradientArchive}^{ImageFillArchive}}16@24, name: instanceWithArchive:unarchiver:
+ (void)registerSubclass:(Class)arg1;
+ (id)p_subclassRegistry;
@property(readonly, nonatomic) NSString *presetKind;
@property(readonly, nonatomic) long long fillType;
@property(readonly, nonatomic) TSUColor *referenceColorForFontArchiving;
@property(readonly, nonatomic) TSUColor *referenceColor;
- (_Bool)drawsInOneStep;
- (_Bool)isClear;
- (_Bool)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1;
- (_Bool)isNearlyWhite;
- (_Bool)isOpaque;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(_Bool)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
-     // Error parsing type: v32@0:8^{FillArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Color}^{GradientArchive}^{ImageFillArchive}}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{FillArchive=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Color}^{GradientArchive}^{ImageFillArchive}}16@24, name: initWithArchive:unarchiver:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

