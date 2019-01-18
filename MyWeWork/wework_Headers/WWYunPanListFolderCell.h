//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKSimpleTableViewCell.h"

@class NSIndexPath, NSString, QMUIButton, UIImageView, UILabel, WWYunPanListFolderCellConfig;
@protocol WWYunPanListFolderCellDelegate;

@interface WWYunPanListFolderCell : WWKSimpleTableViewCell
{
    _Bool _canCheck;
    _Bool _checked;
    _Bool _isSearchMode;
    _Bool _hideDetailBtn;
    _Bool _hideImageView;
    _Bool _showTopFolderMngName;
    _Bool _isTopFolder;
    id <WWYunPanListFolderCellDelegate> _delegate;
    WWYunPanListFolderCellConfig *_config;
    NSIndexPath *_indexpath;
    NSString *_folderName;
    UILabel *_folderLabel;
    UILabel *_permissonLabel;
    QMUIButton *_mDetailButton;
    UIImageView *_checkImageView;
}

@property(nonatomic) _Bool isTopFolder; // @synthesize isTopFolder=_isTopFolder;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) QMUIButton *mDetailButton; // @synthesize mDetailButton=_mDetailButton;
@property(retain, nonatomic) UILabel *permissonLabel; // @synthesize permissonLabel=_permissonLabel;
@property(retain, nonatomic) UILabel *folderLabel; // @synthesize folderLabel=_folderLabel;
@property(nonatomic) _Bool showTopFolderMngName; // @synthesize showTopFolderMngName=_showTopFolderMngName;
@property(nonatomic) _Bool hideImageView; // @synthesize hideImageView=_hideImageView;
@property(nonatomic) _Bool hideDetailBtn; // @synthesize hideDetailBtn=_hideDetailBtn;
@property(nonatomic) _Bool isSearchMode; // @synthesize isSearchMode=_isSearchMode;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property(retain, nonatomic) NSIndexPath *indexpath; // @synthesize indexpath=_indexpath;
@property(nonatomic, getter=isChecked) _Bool checked; // @synthesize checked=_checked;
@property(nonatomic) _Bool canCheck; // @synthesize canCheck=_canCheck;
@property(retain, nonatomic) WWYunPanListFolderCellConfig *config; // @synthesize config=_config;
@property(nonatomic) __weak id <WWYunPanListFolderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setConfig:(id)arg1 withIsTop:(_Bool)arg2 isFromMessageSave:(_Bool)arg3;
- (void)onDetailBtnClick:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
