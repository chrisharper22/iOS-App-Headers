//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBSDKSharingContent, FBSDKSharingDelegate;

@protocol FBSDKSharing <NSObject>
@property(nonatomic) _Bool shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate;
- (_Bool)validateWithError:(id *)arg1;
@end

