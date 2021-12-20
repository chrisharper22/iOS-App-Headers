//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <FBSharedFramework/IGListDisplayDelegate-Protocol.h>

@class IGAudioMusicTrack, IGUserSession, NSString;
@protocol IGAudioBrowserArtistSpotlightBannerSectionControllerDelegate, IGAudioBrowserLogger;

@interface IGAudioBrowserArtistSpotlightBannerSectionController : IGListSectionController <IGListDisplayDelegate>
{
    IGUserSession *_userSession;
    id <IGAudioBrowserLogger> _logger;
    id <IGAudioBrowserArtistSpotlightBannerSectionControllerDelegate> _delegate;
    IGAudioMusicTrack *_track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAudioMusicTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) id <IGAudioBrowserLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <IGAudioBrowserArtistSpotlightBannerSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
