//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class IGSundialAudioPageAudioPartCell, NSArray;
@protocol IGSundialAudioPageAudioPartsSheetViewControllerDelegate;

@interface IGSundialAudioPageAudioPartsSheetViewController : UITableViewController
{
    NSArray *_audioPartViewInfos;
    IGSundialAudioPageAudioPartCell *_sizingCell;
    id <IGSundialAudioPageAudioPartsSheetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSundialAudioPageAudioPartsSheetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)initWithAudioPartViewInfos:(id)arg1 audioPageAudioPartsSectionTitleLabel:(id)arg2;

@end

