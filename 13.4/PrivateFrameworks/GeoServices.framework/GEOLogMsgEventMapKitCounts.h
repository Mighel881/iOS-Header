//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying>
{
    NSMutableArray *_mapKitCounts;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)mapKitCountsType;
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
- (id)mapKitCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapKitCountsCount;
- (void)addMapKitCounts:(id)arg1;
- (void)clearMapKitCounts;
@property(retain, nonatomic) NSMutableArray *mapKitCounts;

@end

