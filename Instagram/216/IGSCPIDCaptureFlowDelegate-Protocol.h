//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGViewController, NSArray, NSString;

@protocol IGSCPIDCaptureFlowDelegate <NSObject>
- (void)userDidCompleteFlow;
- (void)userDidProvideDocumentData:(NSArray *)arg1 withUploadMedium:(NSString *)arg2 onViewController:(IGViewController *)arg3;
- (void)userDidProvideDocumentType:(unsigned long long)arg1;
- (void)userDidTapCloseButtonOnViewController:(IGViewController *)arg1;
- (void)userDidTapBackButtonOnViewController:(IGViewController *)arg1;
@end
