//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPictureInPictureVideoCallViewController.h>

@class IGUserSession, IGVideoCallVideoStreamsViewController;

@interface IGVideoCallPiPViewController : AVPictureInPictureVideoCallViewController
{
    IGUserSession *_userSession;
    IGVideoCallVideoStreamsViewController *_videoStreamsViewController;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)initWithUserSession:(id)arg1 videoStreamsViewController:(id)arg2;

@end
