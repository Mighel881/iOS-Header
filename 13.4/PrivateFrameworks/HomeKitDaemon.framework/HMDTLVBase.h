//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVDescription.h>

@class NSData;

@interface HMDTLVBase : HMDTLVDescription
{
    NSData *_tlvDatablob;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *tlvDatablob; // @synthesize tlvDatablob=_tlvDatablob;
- (id)_parseArray:(id)arg1 result:(id *)arg2 objectCreator:(CDUnknownBlockType)arg3;
- (_Bool)_parse:(id)arg1;
- (_Bool)_parseMandatory:(id)arg1 optional:(id)arg2;
- (_Bool)_parseFields:(id)arg1;
- (_Bool)_parseFromTLVData;
- (id)initWithTLVData:(id)arg1;

@end

