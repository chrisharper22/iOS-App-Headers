//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGProductItem, IGShoppingProductMention, IGShoppingStoryDestination;

@interface IGShoppingRemoveProductConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGProductItem *_feed_productItem;
    IGShoppingStoryDestination *_reel_storyDestination;
    IGShoppingProductMention *_mention_productMention;
    IGShoppingProductMention *_bioMention_productMention;
}

+ (id)reelWithStoryDestination:(id)arg1;
+ (id)mentionWithProductMention:(id)arg1;
+ (id)feedWithProductItem:(id)arg1;
+ (id)bioMentionWithProductMention:(id)arg1;
- (void).cxx_destruct;
- (void)matchFeed:(CDUnknownBlockType)arg1 reel:(CDUnknownBlockType)arg2 mention:(CDUnknownBlockType)arg3 bioMention:(CDUnknownBlockType)arg4;

@end

