//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>

@class NSUUID;

@interface KNBuildChunkIdentifier : NSObject <NSCopying>
{
    NSUUID *_buildUUID;
    int _chunkID;
}

+ (id)emptyIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) int chunkID; // @synthesize chunkID=_chunkID;
@property(readonly, nonatomic) NSUUID *buildUUID; // @synthesize buildUUID=_buildUUID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)resolveToChunkOnSlide:(id)arg1;
- (id)resolveToChunkUsingContext:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuild:(id)arg1 chunkID:(int)arg2;
- (id)initEmptyIdentifier;
-     // Error parsing type: v24@0:8^{BuildChunkIdentifierArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}i}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{BuildChunkIdentifierArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}i}16, name: initWithMessage:

@end

