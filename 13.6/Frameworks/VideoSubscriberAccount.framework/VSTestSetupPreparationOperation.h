//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue;

@interface VSTestSetupPreparationOperation : VSAsyncOperation
{
    NSArray *_errors;
    NSOperationQueue *_privateQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void)addError:(id)arg1;
- (void)executionDidBegin;
- (id)init;

@end

