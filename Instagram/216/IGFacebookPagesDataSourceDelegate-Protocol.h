//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFacebookPagesDataSource, NSArray, NSError;

@protocol IGFacebookPagesDataSourceDelegate <NSObject>
- (void)pagesDataSource:(IGFacebookPagesDataSource *)arg1 didReceiveError:(NSError *)arg2;
- (void)pagesDataSource:(IGFacebookPagesDataSource *)arg1 didLoadPages:(NSArray *)arg2;
@end

