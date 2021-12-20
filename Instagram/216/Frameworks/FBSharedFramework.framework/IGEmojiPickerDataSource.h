//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryRecentStickerStore, IGUserSession, NSArray, NSSet, UIColor;
@protocol IGEmojiPickerDataSourceDelegate, IGListDiffable;

@interface IGEmojiPickerDataSource : NSObject
{
    _Bool _shouldCheckOSVersionForEmoji;
    UIColor *_textColor;
    NSSet *_emojisToExclude;
    IGStoryRecentStickerStore *_recentStickerStore;
    id <IGEmojiPickerDataSourceDelegate> _delegate;
    IGUserSession *_userSession;
    NSArray<IGListDiffable> *_emojisAndLabels;
    NSArray *_supportedEmojiCategories;
}

+ (id)emojiStoreWithShouldCheckOSVersion:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *supportedEmojiCategories; // @synthesize supportedEmojiCategories=_supportedEmojiCategories;
@property(readonly, nonatomic) NSArray<IGListDiffable> *emojisAndLabels; // @synthesize emojisAndLabels=_emojisAndLabels;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <IGEmojiPickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryRecentStickerStore *recentStickerStore; // @synthesize recentStickerStore=_recentStickerStore;
- (id)_emojisForCategory:(unsigned long long)arg1;
- (void)_didTapActionButton:(id)arg1;
- (id)_createActionButtonWithTitle:(id)arg1 emojiType:(unsigned long long)arg2;
- (id)_emojiSectionDiffableItemsForViewModel:(id)arg1 emojiItems:(id)arg2;
- (id)emojiDiffableItemsForEmojiType:(unsigned long long)arg1;
- (id)sectionDiffableItemsForViewModel:(id)arg1;
- (id)initWithUserSession:(id)arg1 supportedEmojiCategories:(id)arg2 shouldCheckOSVersionForEmoji:(_Bool)arg3 textColor:(id)arg4 emojisToExclude:(id)arg5;
- (id)initWithUserSession:(id)arg1 textColor:(id)arg2 emojisToExclude:(id)arg3;

@end

