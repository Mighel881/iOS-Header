//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class _SFMailContentProvider;

@protocol _SFMailContentProviderDataSource <NSObject>
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getWebArchiveDataWithCompletion:(void (^)(NSData *, NSString *, NSError *))arg2;
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getPDFDataWithCompletionHandler:(void (^)(NSData *, NSString *))arg2;
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getReaderContentWithCompletionHandler:(void (^)(NSString *))arg2;
- (_Bool)mailContentProvider:(_SFMailContentProvider *)arg1 canProvideContentType:(long long)arg2;
@end

