//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGProfilePictureImageView;

@interface IGStackedProfilePicture : UIView
{
    IGProfilePictureImageView *_frontProfileView;
    IGProfilePictureImageView *_backProfileView;
    double _profileImageSize;
    unsigned long long _alignmentStyle;
    CAShapeLayer *_backProfileMask;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAShapeLayer *backProfileMask; // @synthesize backProfileMask=_backProfileMask;
@property(nonatomic) unsigned long long alignmentStyle; // @synthesize alignmentStyle=_alignmentStyle;
@property(nonatomic) double profileImageSize; // @synthesize profileImageSize=_profileImageSize;
@property(readonly, nonatomic) IGProfilePictureImageView *backProfileView; // @synthesize backProfileView=_backProfileView;
@property(readonly, nonatomic) IGProfilePictureImageView *frontProfileView; // @synthesize frontProfileView=_frontProfileView;
- (double)_angleToPoint:(struct CGPoint)arg1 centerPoint:(struct CGPoint)arg2;
- (id)_intersectingPointsOfCirclesWithFirstRadius:(double)arg1 secondRadius:(double)arg2 firstCenter:(struct CGPoint)arg3 secondCenter:(struct CGPoint)arg4;
- (id)_backUserFrameMaskPath;
- (struct CGRect)_stackedFrontUserFrame;
- (struct CGRect)_stackedBackUserFrame;
- (id)_createProfileImageViewWithBorderStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setFirstUser:(id)arg1 secondUserImage:(id)arg2 module:(id)arg3;
- (void)setFirstUser:(id)arg1 secondUser:(id)arg2 module:(id)arg3;
- (void)setFirstUserProfileImage:(id)arg1 secondUserProfileImage:(id)arg2;
- (id)initWithProfileImageSize:(double)arg1 alignmentStyle:(unsigned long long)arg2;

@end
