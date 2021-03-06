//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying>
{
    NSString *mType;
    NSString *mName;
}

+ (id)selectionPathTypeWithType:(id)arg1 name:(id)arg2;
+ (id)referenceLineValueLabelType;
+ (id)referenceLineLabelType;
+ (id)referenceLineType;
+ (id)gridLineType;
+ (id)axisLineType;
+ (id)chartBodyType;
+ (id)trendLineR2Type;
+ (id)trendLineEquationType;
+ (id)trendLineType;
+ (id)errorBarType;
+ (id)legendTrendLineNameType;
+ (id)legendSeriesNameType;
+ (id)legendType;
+ (id)seriesValueLabelType;
+ (id)seriesSymbolType;
+ (id)seriesLabelType;
+ (id)seriesType;
+ (id)seriesEditModeType;
+ (id)axisLabelsType;
+ (id)axisTitleType;
+ (id)categoryAxisType;
+ (id)valueAxisType;
+ (id)chartDataSetNameType;
+ (id)chartTitleType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
-     // Error parsing type: v24@0:8^{ChartSelectionPathTypeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}16, name: saveToArchive:
-     // Error parsing type: @24@0:8r^{ChartSelectionPathTypeArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}}16, name: initWithArchive:
- (_Bool)canApplyChartStyleWithDescription:(id)arg1;
- (_Bool)canApplyShapeStyle;
- (_Bool)canApplyParagraphStyle;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;

@end

