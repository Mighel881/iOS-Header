//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>
{
    NSMutableArray *_paymentPasses;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

+ (Class)paymentPassesType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *paymentPasses; // @synthesize paymentPasses=_paymentPasses;
@property(retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)paymentPassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentPassesCount;
- (void)addPaymentPasses:(id)arg1;
- (void)clearPaymentPasses;

@end

