//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSPDecoderDataInfo-Protocol.h>

@class NSString, TSPDataMetadata, TSPDigest;

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>
{
    TSPDigest *_digest;
    NSString *_preferredFilename;
    NSString *_externalFilePath;
    NSString *_documentResourceLocator;
    TSPDataMetadata *_dataMetadata;
    long long _identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TSPDataMetadata *dataMetadata; // @synthesize dataMetadata=_dataMetadata;
@property(readonly, nonatomic) NSString *documentResourceLocator; // @synthesize documentResourceLocator=_documentResourceLocator;
@property(readonly, nonatomic) NSString *externalFilePath; // @synthesize externalFilePath=_externalFilePath;
@property(readonly, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(readonly, nonatomic) TSPDigest *digest; // @synthesize digest=_digest;
-     // Error parsing type: @24@0:8r^{DataInfo=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{DataAttributes}^{EncryptionInfo}QBi}16, name: initWithMessage:
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

