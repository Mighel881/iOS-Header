//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BLTBulletinSendQueueAttachmentSender : NSObject
{
    NSMutableArray *_urls;
}

- (void).cxx_destruct;
- (_Bool)sendAttachmentsWithSender:(id)arg1 timeout:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAttachment:(id)arg1 key:(id)arg2;
- (id)init;

@end

