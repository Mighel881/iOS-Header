//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASRng;

@interface SGModelSampler : NSObject
{
    double _positiveRate;
    double _negativeRate;
    _PASRng *_rng;
}

- (void).cxx_destruct;
- (_Bool)shouldSampleForLabel:(id)arg1;
- (id)initWithPositiveRate:(double)arg1 negativeRate:(double)arg2 rng:(id)arg3;

@end

