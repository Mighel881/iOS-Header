//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthAlgorithms/SRSampleExporting-Protocol.h>
#import <HealthAlgorithms/SRSampling-Protocol.h>

@class NSData, NSString;

@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling>
{
    double _srTimestamp;
    NSData *_mimosaData;
}

- (void).cxx_destruct;
- (id)sr_exportRepresentationEnumerator;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

