//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface XDCRegisterAppMessage : PBCodable <NSCopying>
{
    NSMutableArray *_metadatas;
}

+ (Class)metadataType;
@property(retain, nonatomic) NSMutableArray *metadatas; // @synthesize metadatas=_metadatas;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)metadataAtIndex:(unsigned long long)arg1;
- (unsigned long long)metadatasCount;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;

@end

