//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCReadingHistory.h>

@interface FCReadingHistory (FRAdditions)
- (_Bool)_isChannelMuted:(id)arg1 inSubscriptionList:(id)arg2;
- (_Bool)_isChannelSubscribed:(id)arg1 inSubscriptionList:(id)arg2;
- (_Bool)_isArticleDisLiked:(id)arg1;
- (_Bool)_isArticleLiked:(id)arg1;
- (_Bool)_isArticleOnReadingList:(id)arg1 inReadingList:(id)arg2;
- (id)articleMarkingStateForHeadline:(id)arg1 withReadingList:(id)arg2 withSubscriptionList:(id)arg3;
@end

