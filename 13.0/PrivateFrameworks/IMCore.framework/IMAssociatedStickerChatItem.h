//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMAssociatedMessageChatItem.h>

@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem
{
    NSString *_transferGUID;
}

@property(readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3;
- (_Bool)canDelete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

