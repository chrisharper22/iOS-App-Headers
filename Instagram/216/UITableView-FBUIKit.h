//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface UITableView (FBUIKit)
- (id)fb_dequeueReusableCellWithIdentifier:(id)arg1 cellCreationBlock:(CDUnknownBlockType)arg2 cellControllerCreationBlock:(CDUnknownBlockType)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (id)_fb_cellControllerLookup;
- (CDUnknownBlockType)fb_numberOfItemsInSectionBlock;
- (CDUnknownBlockType)fb_numberOfSectionsBlock;
- (id)fb_indexPathForRowIndexFromBottom:(long long)arg1;
- (id)fb_indexPathForRowIndexFromTop:(long long)arg1;
- (long long)fb_rowIndexForIndexPathFromBottom:(id)arg1;
- (long long)fb_rowIndexForIndexPathFromTop:(id)arg1;
- (struct CGRect)fb_rectForRowAtIndexPath:(id)arg1;
@end

