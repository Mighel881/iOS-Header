//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <network/NSObject-Protocol.h>

@class NWConcrete_nw_endpoint_handler;

@protocol NWConcrete_nw_endpoint_mode_handler <NSObject>
- (void)updatePathWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;
- (void)cancelWithHandler:(NWConcrete_nw_endpoint_handler *)arg1 forced:(_Bool)arg2;
- (void)startWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;

@optional
- (_Bool)applyWithHandler:(NWConcrete_nw_endpoint_handler *)arg1 toChildren:(_Bool (^)(NWConcrete_nw_endpoint_handler *))arg2;
@end

