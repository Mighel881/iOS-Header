//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PUFilmstripAsset, UIImage;

__attribute__((visibility("hidden")))
@interface PUFilmstripMediaProviderResult : NSObject
{
    _Bool _isReadyForDelivery;
    UIImage *_image;
    NSDictionary *_resultInfo;
    long long _requestNumber;
    PUFilmstripAsset *_asset;
    struct CGSize _targetSize;
    CDStruct_1b6d18a9 _actualTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReadyForDelivery; // @synthesize isReadyForDelivery=_isReadyForDelivery;
@property(retain, nonatomic) PUFilmstripAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) CDStruct_1b6d18a9 actualTime; // @synthesize actualTime=_actualTime;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long requestNumber; // @synthesize requestNumber=_requestNumber;
@property(retain, nonatomic) NSDictionary *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (long long)compare:(id)arg1;

@end

