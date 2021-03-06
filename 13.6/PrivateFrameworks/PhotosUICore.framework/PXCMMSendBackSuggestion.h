//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject
{
    NSSet *_participants;
    NSArray *_recipients;
    PHAssetCollection *_assetCollection;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) NSSet *participants; // @synthesize participants=_participants;
- (id)initWithAssetCollection:(id)arg1 participants:(id)arg2;
- (id)init;

@end

