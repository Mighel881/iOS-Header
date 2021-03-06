//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface UpdateRequestTask : AMSTask
{
    long long _action;
    NSString *_requestIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void)_storeBiometricsToken:(id)arg1;
- (id)_parseResult:(id)arg1;
- (id)_serverRequestWithUser:(id)arg1 error:(id *)arg2;
- (id)perform;
- (id)initWithRequestIdentifier:(id)arg1 action:(long long)arg2;

@end

