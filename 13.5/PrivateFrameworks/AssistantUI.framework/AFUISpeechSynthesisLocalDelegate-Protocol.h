//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFSpeechSynthesisRecord, AFUISpeechSynthesis;

@protocol AFUISpeechSynthesisLocalDelegate <NSObject>
- (void)speechSynthesisDidFinish:(AFSpeechSynthesisRecord *)arg1;
- (_Bool)speechSynthesisConnectionIsRecording:(AFUISpeechSynthesis *)arg1;
- (void)speechSynthesis:(AFUISpeechSynthesis *)arg1 prepareForSpeakingWithOptions:(unsigned long long)arg2 completion:(void (^)(unsigned int, NSError *))arg3;
- (void)stopCurrentRecordingForSpeechSynthesis:(AFUISpeechSynthesis *)arg1;
@end

