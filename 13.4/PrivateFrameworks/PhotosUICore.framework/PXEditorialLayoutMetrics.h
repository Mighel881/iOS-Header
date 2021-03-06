//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXEditorialLayoutMetrics : PXLayoutMetrics
{
    _Bool _useSaliency;
    _Bool _useNewImplementation;
    unsigned long long _numberOfColumns;
    double _interTileSpacing;
    double _headerHeight;
    unsigned long long _lowerItemCountThreshold;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool useNewImplementation; // @synthesize useNewImplementation=_useNewImplementation;
@property(nonatomic) _Bool useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) unsigned long long lowerItemCountThreshold; // @synthesize lowerItemCountThreshold=_lowerItemCountThreshold;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

