//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2ConfigPayload, NSArray;

@interface NEIKEv2InformationalPacket : NEIKEv2Packet
{
    NSArray *_deletes;
    NEIKEv2ConfigPayload *_config;
}

+ (unsigned long long)exchangeType;
+ (id)copyTypeDescription;
+ (id)createUpdateAddressInitiator:(id)arg1;
+ (id)createMOBIKEPacketResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createInformationalPacketWithNATPayload:(id)arg1;
+ (id)createNotifyPacketForType:(unsigned long long)arg1 data:(id)arg2;
+ (id)createInformationalResponse:(id)arg1 ikeSA:(id)arg2;
+ (id)createInformational;
+ (id)createDeleteResponse:(id)arg1 child:(id)arg2;
+ (id)createDeleteChild:(id)arg1;
+ (id)createDeleteIKEResponse:(id)arg1;
+ (id)createDeleteIKE;
@property(retain) NEIKEv2ConfigPayload *config; // @synthesize config=_config;
@property(retain) NSArray *deletes; // @synthesize deletes=_deletes;
- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;
@property(readonly) _Bool isDeleteChild;
@property(readonly) _Bool isMOBIKE;
@property(readonly) _Bool isDeleteIKE;
@property(readonly) _Bool isKeepalive;
- (_Bool)validateUpdateAddresses:(id)arg1;
- (_Bool)validateMOBIKE:(id)arg1;
- (_Bool)validateInformational;
- (_Bool)validateKeepalive;
- (_Bool)validateDeleteChild:(id)arg1;
- (_Bool)validateDeleteIKE;

@end

