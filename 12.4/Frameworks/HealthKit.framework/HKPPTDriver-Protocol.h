//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol HKPPTController;

@protocol HKPPTDriver <NSObject>
- (void)runTest:(NSString *)arg1 options:(NSDictionary *)arg2 controller:(id <HKPPTController>)arg3;
- (NSDictionary *)builtinTestDefinitions;
- (NSString *)supportedTestType;
@end

