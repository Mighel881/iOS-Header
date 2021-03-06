//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPDAddressObject, NSString, PBDataReader;

@interface GEORPAddress : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOPDAddressObject *_addressObject;
    NSString *_addressString;
    GEOAddress *_geoAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_addressObject:1;
        unsigned int read_addressString:1;
        unsigned int read_geoAddress:1;
        unsigned int wrote_addressObject:1;
        unsigned int wrote_addressString:1;
        unsigned int wrote_geoAddress:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDAddressObject *addressObject;
@property(readonly, nonatomic) _Bool hasAddressObject;
- (void)_readAddressObject;
@property(retain, nonatomic) NSString *addressString;
@property(readonly, nonatomic) _Bool hasAddressString;
- (void)_readAddressString;
@property(retain, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic) _Bool hasGeoAddress;
- (void)_readGeoAddress;
- (id)initWithData:(id)arg1;
- (id)init;

@end

