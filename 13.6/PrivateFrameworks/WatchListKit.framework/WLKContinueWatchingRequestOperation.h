//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation
{
    WLKContinueWatchingResponse *_response;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WLKContinueWatchingResponse *response; // @synthesize response=_response;
- (void)_donateMediaItems:(id)arg1;
- (void)processResponse;
- (id)initWithQueryParameters:(id)arg1;
- (id)initWithCaller:(id)arg1 options:(long long)arg2;
- (id)init;

@end

