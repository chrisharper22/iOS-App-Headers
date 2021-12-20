//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface IGDirectTextMessageBubbleViewModel : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)viewModelFromVault:(id)arg1 maximumCellWidth:(double)arg2 text:(id)arg3 textType:(long long)arg4 shouldDisableLinks:(_Bool)arg5 textCheckingTypes:(unsigned long long)arg6 bubbleStyle:(id)arg7 bubbleLayoutSpec:(id)arg8 messageEffectToApply:(id)arg9;
+ (id)viewModelWithMaximumCellWidth:(double)arg1 title:(id)arg2 text:(id)arg3 textType:(long long)arg4 shouldUseRainbowGradientOnText:(_Bool)arg5 shouldDisableLinks:(_Bool)arg6 textCheckingTypes:(unsigned long long)arg7 bubbleStyle:(id)arg8 bubbleLayoutSpec:(id)arg9 messageEffectToApply:(id)arg10 isTombstoneMessage:(_Bool)arg11 mentionedUsers:(id)arg12 linkedFeatures:(id)arg13 highlightRanges:(id)arg14 disableAtNavigation:(_Bool)arg15;
+ (id)viewModelWithMaximumCellWidth:(double)arg1 title:(id)arg2 text:(id)arg3 textType:(long long)arg4 shouldUseRainbowGradientOnText:(_Bool)arg5 shouldDisableLinks:(_Bool)arg6 textCheckingTypes:(unsigned long long)arg7 bubbleStyle:(id)arg8 bubbleLayoutSpec:(id)arg9 messageEffectToApply:(id)arg10 isTombstoneMessage:(_Bool)arg11 mentionedUsers:(id)arg12 highlightRanges:(id)arg13;
+ (id)viewModelWithMaximumCellWidth:(double)arg1 title:(id)arg2 text:(id)arg3 textType:(long long)arg4 shouldUseRainbowGradientOnText:(_Bool)arg5 shouldDisableLinks:(_Bool)arg6 textCheckingTypes:(unsigned long long)arg7 bubbleStyle:(id)arg8 bubbleLayoutSpec:(id)arg9 messageEffectToApply:(id)arg10 mentionedUsers:(id)arg11 linkedFeatures:(id)arg12 highlightRanges:(id)arg13 disableAtNavigation:(_Bool)arg14;
+ (id)viewModelWithMaximumCellWidth:(double)arg1 title:(id)arg2 text:(id)arg3 textType:(long long)arg4 shouldUseRainbowGradientOnText:(_Bool)arg5 shouldDisableLinks:(_Bool)arg6 textCheckingTypes:(unsigned long long)arg7 bubbleStyle:(id)arg8 bubbleLayoutSpec:(id)arg9 messageEffectToApply:(id)arg10 mentionedUsers:(id)arg11 highlightRanges:(id)arg12;
+ (id)viewModelWithMaximumCellWidth:(double)arg1 styledText:(id)arg2 textType:(long long)arg3 textCheckingTypes:(unsigned long long)arg4 bubbleStyle:(id)arg5 bubbleLayoutSpec:(id)arg6 messageEffectToApply:(id)arg7;

@end

