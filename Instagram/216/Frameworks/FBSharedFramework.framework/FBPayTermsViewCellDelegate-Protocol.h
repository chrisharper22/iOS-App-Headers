//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBPayTermsViewCell, NSString, NSURL;

@protocol FBPayTermsViewCellDelegate <NSObject>
- (void)fbpayTermsViewCell:(FBPayTermsViewCell *)arg1 didLongTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)fbpayTermsViewCell:(FBPayTermsViewCell *)arg1 didTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
@end

