//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGScrollingSelectorView, IGScrollingSelectorViewItem, NSIndexPath;

@protocol IGScrollingSelectorViewDataSource <NSObject>
- (IGScrollingSelectorViewItem *)scrollingSelectorView:(IGScrollingSelectorView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfItemsInScrollingSelectorView:(IGScrollingSelectorView *)arg1;
@end
