//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/IDSMessage.h>

#import <IMTransferAgent/NSCopying-Protocol.h>

@class NSData, NSNumber, NSString;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying>
{
    NSData *pushToken;
    NSString *_responseAuthToken;
    NSNumber *_length;
    NSData *_signature;
    NSString *_responseRequestURL;
    NSString *_responseRequestorID;
    long long _contentVersion;
    NSString *_contentHeaders;
    NSData *_contentBody;
    NSString *_responseContentHeaders;
    NSData *_responseContentBody;
    long long _responseContentVersion;
    NSData *_sessionToken;
    NSString *_senderID;
    NSString *_destinationID;
    NSString *_anonymousSenderID;
}

@property(copy, nonatomic) NSString *anonymousSenderID; // @synthesize anonymousSenderID=_anonymousSenderID;
@property(copy, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(copy, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property long long responseContentVersion; // @synthesize responseContentVersion=_responseContentVersion;
@property(copy) NSData *responseContentBody; // @synthesize responseContentBody=_responseContentBody;
@property(copy) NSString *responseContentHeaders; // @synthesize responseContentHeaders=_responseContentHeaders;
@property(copy) NSData *contentBody; // @synthesize contentBody=_contentBody;
@property(copy) NSString *contentHeaders; // @synthesize contentHeaders=_contentHeaders;
@property long long contentVersion; // @synthesize contentVersion=_contentVersion;
@property(copy) NSString *responseRequestorID; // @synthesize responseRequestorID=_responseRequestorID;
@property(copy) NSString *responseRequestURL; // @synthesize responseRequestURL=_responseRequestURL;
@property(copy) NSData *signature; // @synthesize signature=_signature;
@property(copy) NSNumber *length; // @synthesize length=_length;
@property(copy) NSString *responseAuthToken; // @synthesize responseAuthToken=_responseAuthToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

