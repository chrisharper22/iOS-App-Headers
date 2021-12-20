//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@interface IGDirectMessageBubbleLayoutSpec : IGValueObject <NSCopying, NSCoding>
{
}

+ (void)initialize;
+ (id)_initWithCornersToRound:(unsigned long long)arg1 groupedBubbleCornerRadius:(double)arg2 bubbleCornerRadius:(double)arg3 minimumBubbleSize:(struct CGSize)arg4 contentStringStyles:(id)arg5;
+ (id)layoutSpecWithCornersToRound:(unsigned long long)arg1 groupedBubbleCornerRadius:(double)arg2 bubbleCornerRadius:(double)arg3 minimumBubbleSize:(struct CGSize)arg4 contentStringStyles:(id)arg5;
+ (id)defaultSpecWithContentStringStyles:(id)arg1 featureSetProvider:(id)arg2;
- (unsigned long long)cornersToRound;

@end

