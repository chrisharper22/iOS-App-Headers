//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class NSString;

@interface IGFindUsersTextLabelSectionController : IGListSectionController
{
    NSString *_title;
    _Bool _isFirstCell;
}

- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (Class)_cellClass;
- (id)initWithTitle:(id)arg1 isFirstCell:(_Bool)arg2;

@end
