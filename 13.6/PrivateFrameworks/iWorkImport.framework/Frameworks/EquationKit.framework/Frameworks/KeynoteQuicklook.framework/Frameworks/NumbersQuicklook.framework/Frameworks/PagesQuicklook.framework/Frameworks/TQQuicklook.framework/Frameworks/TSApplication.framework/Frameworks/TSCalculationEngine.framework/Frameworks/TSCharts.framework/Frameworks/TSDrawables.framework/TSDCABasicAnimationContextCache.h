//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDCAPropertyAnimationContextCache.h>

@interface TSDCABasicAnimationContextCache : TSDCAPropertyAnimationContextCache
{
    id _fromValue;
    id _toValue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id toValue; // @synthesize toValue=_toValue;
@property(readonly, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)initWithAnimation:(id)arg1;

@end

