//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AsyncTask.h"

#import "AMSURLProtocolDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class ASFReceipt, ApplicationProxy, NSString;
@protocol FetchReceiptTaskDelegate;

@interface FetchReceiptTask : AsyncTask <NSURLSessionDelegate, AMSURLProtocolDelegate>
{
    _Bool _attributeToAppStore;
    id <FetchReceiptTaskDelegate> _delegate;
    ApplicationProxy *_app;
    unsigned long long _receiptFlags;
    ASFReceipt *_receipt;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASFReceipt *receipt; // @synthesize receipt=_receipt;
@property(nonatomic) unsigned long long receiptFlags; // @synthesize receiptFlags=_receiptFlags;
@property(nonatomic) _Bool attributeToAppStore; // @synthesize attributeToAppStore=_attributeToAppStore;
@property(readonly, nonatomic) ApplicationProxy *app; // @synthesize app=_app;
@property(nonatomic) __weak id <FetchReceiptTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_requestBodyForApplication:(id)arg1;
- (id)_URLRequestWithBag:(id)arg1 clientInfo:(id)arg2 error:(id *)arg3;
- (id)_requestReceiptDataForApplication:(id)arg1 error:(id *)arg2;
- (void)_finishWithReceiptData:(id)arg1 error:(id)arg2;
- (id)_accountWithClientInfo:(id)arg1 error:(id *)arg2;
- (void)main;
- (id)initWithApplicationProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

