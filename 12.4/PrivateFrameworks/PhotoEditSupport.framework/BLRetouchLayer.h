//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLBaseLayerStack, NSData;

@interface BLRetouchLayer : NSObject
{
    _Bool _enabled;
    int _brushType;
    BLRetouchLayer *_layerBelow;
    BLBaseLayerStack *_layerStack;
}

+ (id)layer;
@property(nonatomic) __weak BLBaseLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(nonatomic) __weak BLRetouchLayer *layerBelow; // @synthesize layerBelow=_layerBelow;
@property(nonatomic) int brushType; // @synthesize brushType=_brushType;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)init;
@property(readonly, nonatomic) _Bool hasLayerMask;
@property(nonatomic) __weak NSData *layerData;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
@property(readonly, nonatomic) struct CGSize imageSize;
- (_Bool)boolForKey:(id)arg1;

@end

