//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURLConnection;
@protocol FBAutoupdaterFeedDelegate;

@protocol FBAutoupdaterFeed <NSObject>
+ (id)new;
- (void)cancel;
- (void)fetchUpdateWithConnection:(NSURLConnection *)arg1;
- (void)fetchUpdate;
- (void)setDelegate:(id <FBAutoupdaterFeedDelegate>)arg1;
- (id)initWithDelegate:(id <FBAutoupdaterFeedDelegate>)arg1;
- (id)init;

@optional
- (void)fetchUpdateWithOtaVersion:(NSString *)arg1;
@end

