//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSFormToABBinder : NSObject
{
}

+ (struct __WBSFieldLabelPatternMatcherArray *)emailFieldLabelPatternMatchers;
+ (struct __WBSFieldLabelPatternMatcherArray *)addressBookFieldLabelPatternMatchers;
+ (unsigned long long)indexOfBestMatchForString:(id)arg1 inArray:(id)arg2 startingPosition:(unsigned long long *)arg3;
+ (id)specifierForAutocompleteToken:(id)arg1;
+ (id)specifierForLabel:(id)arg1;
+ (id)allSynonymsForMatch:(id)arg1 formAppearsToBeChinese:(_Bool)arg2;

@end

