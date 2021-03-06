//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSParallelRandom.h>

@protocol MTLBuffer;

@interface MPSParallelRandomMTGP32 : MPSParallelRandom
{
    id <MTLBuffer> _state;
    id <MTLBuffer> _pShift1;
    id <MTLBuffer> _pShift2;
    id <MTLBuffer> _pMR;
    id <MTLBuffer> _pMT;
    id <MTLBuffer> _pM;
    id <MTLBuffer> _pStateIdx;
    float _bernoulliParameter;
    float _uniformMin;
    float _uniformMax;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)synchronizeStateOnCommandBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2;
- (void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 destinationDataType:(unsigned int)arg2 seed:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1 destinationDataType:(unsigned int)arg2 seed:(unsigned long long)arg3 distributionDescriptor:(id)arg4;

@end

