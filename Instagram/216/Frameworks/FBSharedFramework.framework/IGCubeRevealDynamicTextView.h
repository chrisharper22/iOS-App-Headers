//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGDynamicTextViewProtocol-Protocol.h>
#import <FBSharedFramework/UICollectionViewDataSource-Protocol.h>
#import <FBSharedFramework/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, UICollectionView, UIColor, UIFont;

@interface IGCubeRevealDynamicTextView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGDynamicTextViewProtocol>
{
    UIFont *_activeFont;
    UICollectionView *_cubeRevealCollectionView;
    UIColor *_color;
    UIColor *_textBackgroundColor;
    double _currentTime;
    NSArray *_phraseModels;
    double _currentSongTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentSongTime; // @synthesize currentSongTime=_currentSongTime;
@property(copy, nonatomic) NSArray *phraseModels; // @synthesize phraseModels=_phraseModels;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)outlinePath;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
